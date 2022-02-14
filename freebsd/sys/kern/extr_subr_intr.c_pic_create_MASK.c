
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_pic {intptr_t pic_xref; int pic_flags; int pic_child_lock; int pic_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct intr_pic*,int ) ;
 struct intr_pic* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct intr_pic* FUNC_5 (int ,intptr_t,int) ;
 int VAR_6 ;

__attribute__((used)) static struct intr_pic *
FUNC_6(device_t VAR_7, intptr_t VAR_8, int VAR_9)
{
 struct intr_pic *VAR_10;

 FUNC_3(&VAR_5);
 VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_9);
 if (VAR_10 != ((void*)0)) {
  FUNC_4(&VAR_5);
  return (VAR_10);
 }
 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(&VAR_5);
  return (((void*)0));
 }
 VAR_10->pic_xref = VAR_8;
 VAR_10->pic_dev = VAR_7;
 VAR_10->pic_flags = VAR_9;
 FUNC_2(&VAR_10->pic_child_lock, "pic child lock", ((void*)0), VAR_0);
 FUNC_0(&VAR_4, VAR_10, VAR_6);
 FUNC_4(&VAR_5);

 return (VAR_10);
}
