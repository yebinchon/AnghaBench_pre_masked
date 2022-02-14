
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct mdio_ops {int (* write ) (int *,int ,int ,int ,int) ;int (* read ) (int *,int ,int ,int ,unsigned int*) ;} ;
typedef int adapter_t ;
struct TYPE_2__ {struct mdio_ops* mdio_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ,unsigned int*) ;
 int FUNC_5 (int *,int ,int ,int ,unsigned int*) ;
 int FUNC_6 (int *,int ,int ,int ,unsigned int*) ;
 int FUNC_7 (int) ;

int FUNC_8(adapter_t *VAR_6, int VAR_7, u32 *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 unsigned int VAR_12;
 const struct mdio_ops *VAR_13 = FUNC_2(VAR_6)->mdio_ops;

 FUNC_0(VAR_6);

 VAR_11 = VAR_13->write(VAR_6, VAR_3, 0, VAR_0, VAR_7);
 if (VAR_11)
  goto out;

 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  VAR_11 = VAR_13->read(VAR_6, VAR_3, 0, VAR_4, &VAR_12);
  if (VAR_11)
   goto out;
  if (VAR_12 == 1)
   break;
  FUNC_7(5);
 }
 if (VAR_12 != 1) {
  VAR_11 = -VAR_5;
  goto out;
 }

 for ( ; !VAR_11 && VAR_9; VAR_9--, VAR_8++) {
  VAR_11 = VAR_13->read(VAR_6, VAR_3, 0, VAR_2, VAR_8);
  if (!VAR_11) {
   VAR_11 = VAR_13->read(VAR_6, VAR_3, 0, VAR_1,
           &VAR_12);
   *VAR_8 |= VAR_12 << 16;
  }
 }
out: FUNC_1(VAR_6);
 return VAR_11;
}
