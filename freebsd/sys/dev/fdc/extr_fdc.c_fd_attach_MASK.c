
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_data {int fd_bq; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct fd_data* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct fd_data*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct fd_data *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_2(VAR_2, VAR_4, VAR_1, ((void*)0));
 VAR_4->flags |= VAR_0;
 FUNC_0(&VAR_4->fd_bq);

 return (0);
}
