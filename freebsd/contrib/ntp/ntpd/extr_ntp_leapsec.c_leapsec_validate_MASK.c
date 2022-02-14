
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hv; } ;
typedef TYPE_1__ sha1_digest ;
typedef int line ;
typedef int leapsec_reader ;
typedef int isc_sha1_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int ,void*,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (char*,char*,int) ;

int
FUNC_9(
 leapsec_reader VAR_4,
 void * VAR_5)
{
 isc_sha1_t VAR_6;
 sha1_digest VAR_7, VAR_8;
 char VAR_9[50];
 int VAR_10 = -1;

 FUNC_4(&VAR_6);
 while (FUNC_2(VAR_4, VAR_5, VAR_9, sizeof(VAR_9))) {
  if (!FUNC_8(VAR_9, "#h", 2))
   VAR_10 = FUNC_1(&VAR_7, VAR_9+2);
  else if (!FUNC_8(VAR_9, "#@", 2))
   FUNC_0(&VAR_6, VAR_9+2);
  else if (!FUNC_8(VAR_9, "#$", 2))
   FUNC_0(&VAR_6, VAR_9+2);
  else if (FUNC_6((unsigned char)VAR_9[0]))
   FUNC_0(&VAR_6, VAR_9);
 }
 FUNC_3(&VAR_6, VAR_8.hv);
 FUNC_5(&VAR_6);

 if (0 > VAR_10)
  return VAR_3;
 if (0 == VAR_10)
  return VAR_0;
 if (0 != FUNC_7(&VAR_7, &VAR_8, sizeof(sha1_digest)))
  return VAR_1;
 return VAR_2;
}
