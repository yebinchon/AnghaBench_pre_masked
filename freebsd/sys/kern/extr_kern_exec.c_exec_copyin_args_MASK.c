
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct image_args {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct image_args*,int) ;
 int FUNC_1 (struct image_args*) ;
 int FUNC_2 (struct image_args*,char*,int ) ;
 int FUNC_3 (struct image_args*,char*,int ) ;
 int FUNC_4 (struct image_args*,char const*,int) ;
 int FUNC_5 (struct image_args*) ;
 int FUNC_6 (int ,scalar_t__*) ;

int
FUNC_7(struct image_args *VAR_2, const char *VAR_3,
    enum uio_seg VAR_4, char **VAR_5, char **VAR_6)
{
 u_long VAR_7, VAR_8;
 int VAR_9;

 FUNC_0(VAR_2, sizeof(*VAR_2));
 if (VAR_5 == ((void*)0))
  return (VAR_0);





 VAR_9 = FUNC_1(VAR_2);
 if (VAR_9 != 0)
  return (VAR_9);




 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_9 != 0)
  goto err_exit;




 for (;;) {
  VAR_9 = FUNC_6(VAR_5++, &VAR_7);
  if (VAR_9 == -1) {
   VAR_9 = VAR_0;
   goto err_exit;
  }
  if (VAR_7 == 0)
   break;
  VAR_9 = FUNC_2(VAR_2, (char *)(uintptr_t)VAR_7,
      VAR_1);
  if (VAR_9 != 0)
   goto err_exit;
 }




 if (VAR_6) {
  for (;;) {
   VAR_9 = FUNC_6(VAR_6++, &VAR_8);
   if (VAR_9 == -1) {
    VAR_9 = VAR_0;
    goto err_exit;
   }
   if (VAR_8 == 0)
    break;
   VAR_9 = FUNC_3(VAR_2,
       (char *)(uintptr_t)VAR_8, VAR_1);
   if (VAR_9 != 0)
    goto err_exit;
  }
 }

 return (0);

err_exit:
 FUNC_5(VAR_2);
 return (VAR_9);
}
