
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tdata_t ;
typedef int symit_data_t ;
struct TYPE_3__ {scalar_t__ cth_magic; scalar_t__ cth_version; size_t cth_stroff; size_t cth_strlen; int cth_flags; } ;
typedef TYPE_1__ ctf_header_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_1__*,int,int *,char*) ;
 char* VAR_3 ;
 size_t FUNC_1 (int,size_t,int,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (size_t) ;

tdata_t *
FUNC_5(char *VAR_4, caddr_t VAR_5, size_t VAR_6, symit_data_t *VAR_7, char *VAR_8)
{
 ctf_header_t *VAR_9;
 caddr_t VAR_10;
 size_t VAR_11;
 tdata_t *VAR_12;

 VAR_3 = VAR_4;

 if (VAR_6 < sizeof (ctf_header_t))
  FUNC_3("Corrupt CTF - short header");

 void *VAR_13 = (void *) VAR_5;
 VAR_9 = VAR_13;
 VAR_5 += sizeof (ctf_header_t);
 VAR_6 -= sizeof (ctf_header_t);

 if (VAR_9->cth_magic != VAR_1)
  FUNC_3("Corrupt CTF - bad magic 0x%x", VAR_9->cth_magic);

 if (VAR_9->cth_version != VAR_2)
  FUNC_3("Unknown CTF version %d", VAR_9->cth_version);

 VAR_11 = VAR_9->cth_stroff + VAR_9->cth_strlen;
 if (VAR_9->cth_flags & VAR_0) {
  size_t VAR_14;

  VAR_10 = FUNC_4(VAR_11);
  if ((VAR_14 = FUNC_1(VAR_5, VAR_6, VAR_10, VAR_11)) !=
      VAR_11) {
   FUNC_3("Corrupt CTF - short decompression "
       "(was %d, expecting %d)", VAR_14, VAR_11);
  }
 } else {
  VAR_10 = VAR_5;
  VAR_11 = VAR_6;
 }

 VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_7, VAR_8);

 if (VAR_9->cth_flags & VAR_0)
  FUNC_2(VAR_10);

 VAR_3 = ((void*)0);

 return (VAR_12);
}
