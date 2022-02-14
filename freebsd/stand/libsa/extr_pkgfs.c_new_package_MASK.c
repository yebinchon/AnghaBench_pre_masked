
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct package {int pkg_fd; int pkg_zs; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct package*,int) ;
 int FUNC_1 (struct package*) ;
 int FUNC_2 (struct package*,scalar_t__*) ;
 int FUNC_3 (int *,int) ;
 struct package* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(int VAR_9, struct package **VAR_10)
{
 struct package *VAR_11;
 off_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_11 = FUNC_4(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return (VAR_2);

 FUNC_0(VAR_11, sizeof(*VAR_11));
 VAR_11->pkg_fd = VAR_9;




 VAR_15 = VAR_1;
 VAR_12 = 0;


 if (FUNC_2(VAR_11, &VAR_12) != 0x1f || FUNC_2(VAR_11, &VAR_12) != 0x8b)
  goto fail;

 if (FUNC_2(VAR_11, &VAR_12) != VAR_7)
  goto fail;

 VAR_13 = FUNC_2(VAR_11, &VAR_12);
 if (VAR_13 & VAR_6)
  goto fail;


 for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
  if (FUNC_2(VAR_11, &VAR_12) == -1)
   goto fail;
 }


 if (VAR_13 & VAR_3) {
  VAR_14 = (FUNC_2(VAR_11, &VAR_12) & 0xff) |
      ((FUNC_2(VAR_11, &VAR_12) << 8) & 0xff);
  while (VAR_14-- > 0) {
   if (FUNC_2(VAR_11, &VAR_12) == -1)
    goto fail;
  }
 }


 if (VAR_13 & VAR_5) {
  do {
   VAR_14 = FUNC_2(VAR_11, &VAR_12);
  } while (VAR_14 != 0 && VAR_14 != -1);
  if (VAR_14 == -1)
   goto fail;
 }


 if (VAR_13 & VAR_0) {
  while (1) {
   VAR_14 = FUNC_2(VAR_11, &VAR_12);
   if (VAR_14 == -1)
    goto fail;
   if (VAR_14 == 0)
    break;
   FUNC_5(VAR_14);
  }
 }


 if (VAR_13 & VAR_4) {
  if (FUNC_2(VAR_11, &VAR_12) == -1)
   goto fail;
  if (FUNC_2(VAR_11, &VAR_12) == -1)
   goto fail;
 }




 VAR_15 = FUNC_3(&VAR_11->pkg_zs, -15);
 if (VAR_15 != VAR_8)
  goto fail;

 *VAR_10 = VAR_11;
 return (0);

 fail:
 FUNC_1(VAR_11);
 return (VAR_15);
}
