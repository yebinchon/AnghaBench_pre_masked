
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icl_module {int (* im_limits ) (struct icl_drv_limits*) ;} ;
struct icl_drv_limits {scalar_t__ idl_max_recv_data_segment_length; scalar_t__ idl_max_send_data_segment_length; scalar_t__ idl_max_burst_length; scalar_t__ idl_first_burst_length; } ;
struct TYPE_2__ {int sc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (struct icl_drv_limits*,int) ;
 struct icl_module* FUNC_2 (char const*,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct icl_drv_limits*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(const char *VAR_3, bool VAR_4, struct icl_drv_limits *VAR_5)
{
 struct icl_module *VAR_6;
 int VAR_7;

 FUNC_1(VAR_5, sizeof(*VAR_5));
 FUNC_4(&VAR_2->sc_lock);
 VAR_6 = FUNC_2(VAR_3, VAR_4, 0);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(&VAR_2->sc_lock);
  return (VAR_1);
 }

 VAR_7 = VAR_6->im_limits(VAR_5);
 FUNC_5(&VAR_2->sc_lock);
 if (VAR_7 == 0 &&
     (((VAR_5->idl_max_recv_data_segment_length) != 0 && ((VAR_5->idl_max_recv_data_segment_length) < (512) || (VAR_5->idl_max_recv_data_segment_length) > (16777215))) ||
     ((VAR_5->idl_max_send_data_segment_length) != 0 && ((VAR_5->idl_max_send_data_segment_length) < (512) || (VAR_5->idl_max_send_data_segment_length) > (16777215))) ||
     ((VAR_5->idl_max_burst_length) != 0 && ((VAR_5->idl_max_burst_length) < (512) || (VAR_5->idl_max_burst_length) > (16777215))) ||
     ((VAR_5->idl_first_burst_length) != 0 && ((VAR_5->idl_first_burst_length) < (512) || (VAR_5->idl_first_burst_length) > (16777215))))) {
  VAR_7 = VAR_0;
 }






 if (VAR_7 == 0 && VAR_5->idl_first_burst_length > 0 &&
     VAR_5->idl_max_burst_length > 0 &&
     VAR_5->idl_first_burst_length > VAR_5->idl_max_burst_length) {
  VAR_7 = VAR_0;
 }

 return (VAR_7);
}
