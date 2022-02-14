
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dev_rcv_lists {struct hlist_head* rx; struct hlist_head* rx_sff; } ;
typedef int canid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;

__attribute__((used)) static struct hlist_head *FUNC_0(canid_t *VAR_13, canid_t *VAR_14,
     struct dev_rcv_lists *VAR_15)
{
 canid_t VAR_16 = *VAR_13 & VAR_5;


 if (*VAR_14 & VAR_3) {

  *VAR_14 &= VAR_4;
  return &VAR_15->rx[VAR_10];
 }






 if ((*VAR_14 & VAR_0) && !(*VAR_13 & VAR_0))
  *VAR_14 &= (VAR_7 | (VAR_0 | VAR_6));


 *VAR_13 &= *VAR_14;


 if (VAR_16)
  return &VAR_15->rx[VAR_12];


 if (!(*VAR_14))
  return &VAR_15->rx[VAR_8];


 if (((*VAR_14 & (VAR_0 | VAR_6)) == (VAR_0 | VAR_6))
     && !(*VAR_13 & VAR_6)) {

  if (*VAR_13 & VAR_0) {
   if (*VAR_14 == (VAR_1 | (VAR_0 | VAR_6))) {

    return &VAR_15->rx[VAR_9];
   }
  } else {
   if (*VAR_14 == (VAR_7 | (VAR_0 | VAR_6)))
    return &VAR_15->rx_sff[*VAR_13];
  }
 }


 return &VAR_15->rx[VAR_11];
}
