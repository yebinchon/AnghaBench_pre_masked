
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm6_tunnel_spi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_8;

 VAR_4 = 0;
 VAR_7 = FUNC_1("xfrm6_tunnel_spi",
        sizeof(struct xfrm6_tunnel_spi),
        0, VAR_1,
        ((void*)0));
 if (!VAR_7)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_0(&VAR_5[VAR_8]);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(&VAR_6[VAR_8]);
 return 0;
}
