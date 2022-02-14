
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_t ;
typedef int off_t ;
typedef int blkptr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int *,int *,char*,int ,int ) ;
 int VAR_5 ;
 char* VAR_6 ;

__attribute__((used)) static int
FUNC_10(vdev_t *VAR_7, char *VAR_8, size_t VAR_9)
{
 blkptr_t VAR_10;
 char *VAR_11 = VAR_6;
 off_t VAR_12 = FUNC_8(VAR_4, VAR_5);

 if (VAR_9 > VAR_1)
  VAR_9 = VAR_1;

 FUNC_5(&VAR_10);
 FUNC_3(&VAR_10, VAR_1);
 FUNC_4(&VAR_10, VAR_1);
 FUNC_1(&VAR_10, VAR_2);
 FUNC_2(&VAR_10, VAR_3);
 FUNC_6(FUNC_0(&VAR_10), VAR_12);
 if (FUNC_9(VAR_7, &VAR_10, VAR_11, VAR_12, 0))
  return (VAR_0);
 FUNC_7(VAR_8, VAR_11, VAR_9);
 return (0);
}
