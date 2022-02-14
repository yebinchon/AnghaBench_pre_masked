
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int hcb_p ;
typedef TYPE_4__* ccb_p ;
struct TYPE_7__ {scalar_t__ lastp; scalar_t__ goalp; } ;
struct TYPE_9__ {TYPE_2__* data; TYPE_1__ head; } ;
struct TYPE_10__ {int xerr_status; scalar_t__ startp; int data_len; int host_flags; int segments; int ext_ofs; int ext_sg; TYPE_3__ phys; scalar_t__ extra_bytes; } ;
struct TYPE_8__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,int,int*) ;

__attribute__((used)) static int FUNC_2(hcb_p VAR_5, ccb_p VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10 = 0;
 if (VAR_6->xerr_status & (VAR_2|VAR_3|VAR_4)) {
  if (VAR_6->xerr_status & VAR_2)
   VAR_9 -= VAR_6->extra_bytes;
  if (VAR_6->xerr_status & VAR_3)
   ++VAR_9;
  if (VAR_6->xerr_status & VAR_4)
   --VAR_9;
 }





 if (VAR_6->phys.head.lastp == VAR_6->phys.head.goalp)
  return VAR_9;





 if (VAR_6->startp == VAR_6->phys.head.lastp ||
     FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_6->phys.head.lastp),
       &VAR_10) < 0) {
  return VAR_6->data_len;
 }




 if (VAR_6->host_flags & VAR_0) {
  return -VAR_10;
 }





 VAR_8 = VAR_1 - VAR_6->segments;
 VAR_9 = -VAR_6->ext_ofs;
 for (VAR_7 = VAR_6->ext_sg; VAR_7 < VAR_1; ++VAR_7) {
  u_int VAR_11 = FUNC_0(VAR_6->phys.data[VAR_7].size);
  VAR_9 += (VAR_11 & 0xffffff);
 }




 return VAR_9;
}
