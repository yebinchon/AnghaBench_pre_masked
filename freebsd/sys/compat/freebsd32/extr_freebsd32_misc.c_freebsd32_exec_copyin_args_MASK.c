
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct image_args {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int arg ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct image_args*,int) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (struct image_args*) ;
 int FUNC_4 (struct image_args*,char*,int ) ;
 int FUNC_5 (struct image_args*,char*,int ) ;
 int FUNC_6 (struct image_args*,char const*,int) ;
 int FUNC_7 (struct image_args*) ;

int
FUNC_8(struct image_args *VAR_2, const char *VAR_3,
    enum uio_seg VAR_4, u_int32_t *VAR_5, u_int32_t *VAR_6)
{
 char *VAR_7, *VAR_8;
 u_int32_t *VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(VAR_2, sizeof(*VAR_2));
 if (VAR_5 == ((void*)0))
  return (VAR_0);





 VAR_11 = FUNC_3(VAR_2);
 if (VAR_11 != 0)
  return (VAR_11);




 VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_4);
 if (VAR_11 != 0)
  goto err_exit;




 VAR_9 = VAR_5;
 for (;;) {
  VAR_11 = FUNC_2(VAR_9++, &VAR_10, sizeof(VAR_10));
  if (VAR_11)
   goto err_exit;
  if (VAR_10 == 0)
   break;
  VAR_7 = FUNC_0(VAR_10);
  VAR_11 = FUNC_4(VAR_2, VAR_7, VAR_1);
  if (VAR_11 != 0)
   goto err_exit;
 }




 if (VAR_6) {
  VAR_9 = VAR_6;
  for (;;) {
   VAR_11 = FUNC_2(VAR_9++, &VAR_10, sizeof(VAR_10));
   if (VAR_11)
    goto err_exit;
   if (VAR_10 == 0)
    break;
   VAR_8 = FUNC_0(VAR_10);
   VAR_11 = FUNC_5(VAR_2, VAR_8, VAR_1);
   if (VAR_11 != 0)
    goto err_exit;
  }
 }

 return (0);

err_exit:
 FUNC_7(VAR_2);
 return (VAR_11);
}
