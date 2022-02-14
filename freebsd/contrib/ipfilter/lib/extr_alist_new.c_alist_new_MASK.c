
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int i6; } ;
struct TYPE_7__ {int al_not; int al_family; int al_i6addr; TYPE_1__ al_i6mask; int al_mask; } ;
typedef TYPE_2__ alist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,char*,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int*,int*,int*,int*) ;
 int VAR_3 ;
 char* FUNC_9 (char*,char) ;

alist_t *
FUNC_10(int VAR_4, char *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 char *VAR_11;
 alist_t *VAR_12;
 u_int VAR_13;

 if (VAR_4 == VAR_2) {
  if (FUNC_9(VAR_5, ':') != ((void*)0))
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_0;
 }
 if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
  return ((void*)0);

 VAR_12 = FUNC_2(1, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_3, "alist_new out of memory\n");
  return ((void*)0);
 }

 while (FUNC_0(*VAR_5))
  VAR_5++;

 if (*VAR_5 == '!') {
  VAR_12->al_not = 1;
  VAR_5++;
  while (FUNC_0(*VAR_5))
   VAR_5++;
 }

 VAR_10 = -1;
 VAR_11 = FUNC_9(VAR_5, '/');
 if (VAR_11 != ((void*)0)) {
  *VAR_11 = '\0';
  VAR_10 = FUNC_1(VAR_11 + 1);
 }

 if (VAR_4 == VAR_0) {
  if (VAR_10 > 32)
   goto bad;

  VAR_6 = VAR_7 = VAR_8 = VAR_9 = -1;
  FUNC_8(VAR_5, "%d.%d.%d.%d", &VAR_6, &VAR_7, &VAR_8, &VAR_9);

  if (VAR_10 > 0 && VAR_10 < 33) {
   VAR_13 = 0xffffffff << (32 - VAR_10);
  } else if (VAR_7 == -1) {
   VAR_13 = 0xff000000;
   VAR_7 = VAR_8 = VAR_9 = 0;
  } else if (VAR_8 == -1) {
   VAR_13 = 0xffff0000;
   VAR_8 = VAR_9 = 0;
  } else if (VAR_9 == -1) {
   VAR_13 = 0xffffff00;
   VAR_9 = 0;
  } else {
   VAR_13 = 0xffffffff;
  }
  VAR_12->al_mask = FUNC_7(VAR_13);
 } else {
  if (VAR_10 > 128)
   goto bad;
  FUNC_3(VAR_10, VAR_12->al_i6mask.i6);
 }

 if (FUNC_6(VAR_4, VAR_5, &VAR_12->al_i6addr) == -1) {
  if (VAR_11 != ((void*)0))
   *VAR_11 = '/';
  FUNC_4(VAR_3, "Cannot parse hostname\n");
  goto bad;
 }
 VAR_12->al_family = VAR_4;
 if (VAR_11 != ((void*)0))
  *VAR_11 = '/';
 return VAR_12;
bad:
 FUNC_5(VAR_12);
 return ((void*)0);
}
