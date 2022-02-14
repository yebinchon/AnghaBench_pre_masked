
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_handler {size_t idiag_type; } ;
typedef size_t __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t const VAR_2 ;
 struct inet_diag_handler const** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(const struct inet_diag_handler *VAR_5)
{
 const __u16 VAR_6 = VAR_5->idiag_type;
 int VAR_7 = -VAR_1;

 if (VAR_6 >= VAR_2)
  goto out;

 FUNC_0(&VAR_4);
 VAR_7 = -VAR_0;
 if (VAR_3[VAR_6] == ((void*)0)) {
  VAR_3[VAR_6] = VAR_5;
  VAR_7 = 0;
 }
 FUNC_1(&VAR_4);
out:
 return VAR_7;
}
