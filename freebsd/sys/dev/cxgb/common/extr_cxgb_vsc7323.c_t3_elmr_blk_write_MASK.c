
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mdio_ops {int (* write ) (int *,int ,int ,int ,int) ;} ;
typedef int adapter_t ;
struct TYPE_2__ {struct mdio_ops* mdio_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ,int const) ;
 int FUNC_5 (int *,int ,int ,int ,int const) ;

int FUNC_6(adapter_t *VAR_4, int VAR_5, const u32 *VAR_6, int VAR_7)
{
 int VAR_8;
 const struct mdio_ops *VAR_9 = FUNC_2(VAR_4)->mdio_ops;

 FUNC_0(VAR_4);
 VAR_8 = VAR_9->write(VAR_4, VAR_3, 0, VAR_0, VAR_5);
 for ( ; !VAR_8 && VAR_7; VAR_7--, VAR_6++) {
  VAR_8 = VAR_9->write(VAR_4, VAR_3, 0, VAR_2,
    *VAR_6 & 0xffff);
  if (!VAR_8)
   VAR_8 = VAR_9->write(VAR_4, VAR_3, 0, VAR_1,
     *VAR_6 >> 16);
 }
 FUNC_1(VAR_4);
 return VAR_8;
}
