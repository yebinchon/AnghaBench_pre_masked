
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int16_t ;
typedef TYPE_1__* ng_l2cap_p ;
struct TYPE_4__ {int lecid; int cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static u_int16_t
FUNC_1(ng_l2cap_p VAR_6,int VAR_7)
{
 u_int16_t VAR_8 ;
 u_int16_t VAR_9;
 uint16_t VAR_10;
 int VAR_11;
 if(VAR_7){
  VAR_9 = VAR_6->lecid;

  VAR_10 = VAR_4;
  VAR_11 = VAR_2;
 }else{
  VAR_9 = VAR_6->cid;

  VAR_10 = VAR_3;
  VAR_11 = VAR_1;
 }
 VAR_8 = (VAR_9+1) & VAR_10;

 if (VAR_8 < VAR_0)
  VAR_8 = VAR_0;

 while (VAR_8 != VAR_9) {
  if (FUNC_0(VAR_6, VAR_8, VAR_11) == ((void*)0)) {
   if(!VAR_7){
    VAR_6->cid = VAR_8;
   }else{
    VAR_6->lecid = VAR_8;
   }
   return (VAR_8);
  }

  VAR_8 ++;
  VAR_8 &= VAR_10;
  if (VAR_8 < VAR_0)
   VAR_8 = VAR_0;
 }

 return (VAR_5);
}
