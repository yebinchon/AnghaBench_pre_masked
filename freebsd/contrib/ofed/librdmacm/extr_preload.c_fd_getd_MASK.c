
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_info {int fd; } ;


 int VAR_0 ;
 struct fd_info* FUNC_0 (int *,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_1)
{
 struct fd_info *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1);
 return VAR_2 ? VAR_2->fd : VAR_1;
}
