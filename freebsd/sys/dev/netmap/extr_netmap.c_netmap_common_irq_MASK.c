
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netmap_kring {scalar_t__ nr_mode; int (* nm_notify ) (struct netmap_kring*,int ) ;int nr_kflags; } ;
struct netmap_adapter {int dummy; } ;
typedef enum txrx { ____Placeholder_txrx } txrx ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct netmap_kring** FUNC_0 (struct netmap_adapter*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,char*,char*,size_t) ;
 size_t FUNC_2 (struct netmap_adapter*,int) ;
 int FUNC_3 (struct netmap_kring*,int ) ;

int
FUNC_4(struct netmap_adapter *VAR_9, u_int VAR_10, u_int *VAR_11)
{
 struct netmap_kring *VAR_12;
 enum txrx VAR_13 = (VAR_11 ? VAR_6 : VAR_7);

 VAR_10 &= VAR_0;

 if (VAR_8 & (VAR_3|VAR_4)) {
         FUNC_1(5, "received %s queue %d", VAR_11 ? "RX" : "TX" , VAR_10);
 }

 if (VAR_10 >= FUNC_2(VAR_9, VAR_13))
  return VAR_5;

 VAR_12 = FUNC_0(VAR_9, VAR_13)[VAR_10];

 if (VAR_12->nr_mode == VAR_1) {
  return VAR_5;
 }

 if (VAR_13 == VAR_6) {
  VAR_12->nr_kflags |= VAR_2;
  *VAR_11 = 1;
 }

 return VAR_12->nm_notify(VAR_12, 0);
}
