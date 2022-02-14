
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdata_t ;
struct TYPE_4__ {int ctl_label; int ctl_typeidx; } ;
typedef TYPE_1__ ctf_lblent_t ;
struct TYPE_5__ {scalar_t__ cth_lbloff; scalar_t__ cth_stroff; size_t cth_objtoff; } ;
typedef TYPE_2__ ctf_header_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,char*) ;

__attribute__((used)) static int
FUNC_5(ctf_header_t *VAR_1, tdata_t *VAR_2, caddr_t VAR_3, char *VAR_4)
{
 caddr_t VAR_5 = VAR_3 + VAR_1->cth_lbloff;
 caddr_t VAR_6 = VAR_3 + VAR_1->cth_stroff;
 size_t VAR_7 = VAR_1->cth_objtoff - VAR_1->cth_lbloff;
 int VAR_8 = 0, VAR_9 = -1;
 char *VAR_10 = ((void*)0);
 ctf_lblent_t *VAR_11;
 void *VAR_12 = (void *) VAR_5;

 for (VAR_11 = VAR_12; (caddr_t)VAR_11 < VAR_5 + VAR_7; VAR_11++) {
  char *VAR_13 = VAR_6 + VAR_11->ctl_label;

  VAR_8 = VAR_11->ctl_typeidx;

  FUNC_0(3, "Resurrected label %s type idx %d\n", VAR_13, VAR_8);

  FUNC_2(VAR_2, VAR_13, VAR_8);

  if (VAR_9 == -1) {
   VAR_9 = VAR_8;
   VAR_10 = VAR_13;
   if (VAR_4 != ((void*)0) && FUNC_1(VAR_4, "BASE"))
    return (VAR_8);
  }

  if (VAR_4 != ((void*)0) && FUNC_1(VAR_13, VAR_4))
   return (VAR_8);
 }

 if (VAR_4 != ((void*)0)) {

  FUNC_4("%s: Cannot find label `%s' - using base (%s)\n",
      VAR_0, VAR_4, (VAR_10 ? VAR_10 : "NONE"));

  FUNC_3(VAR_2);
  FUNC_2(VAR_2, VAR_10, VAR_9);

  return (VAR_9);
 }

 return (VAR_8);
}
