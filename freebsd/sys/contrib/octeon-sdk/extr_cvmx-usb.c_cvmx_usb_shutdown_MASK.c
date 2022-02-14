
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int enable; int por; int hclk_rst; scalar_t__ hrst; scalar_t__ prst; } ;
struct TYPE_11__ {int u64; TYPE_3__ s; } ;
typedef TYPE_4__ cvmx_usbnx_clk_ctl_t ;
typedef int cvmx_usb_status_t ;
typedef int cvmx_usb_state_t ;
struct TYPE_8__ {scalar_t__ head; } ;
struct TYPE_12__ {int index; TYPE_2__* active_pipes; TYPE_1__ idle_pipes; } ;
typedef TYPE_5__ cvmx_usb_internal_state_t ;
struct TYPE_9__ {scalar_t__ head; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (int ,int ) ;

cvmx_usb_status_t FUNC_7(cvmx_usb_state_t *VAR_7)
{
    cvmx_usbnx_clk_ctl_t VAR_8;
    cvmx_usb_internal_state_t *VAR_9 = (cvmx_usb_internal_state_t*)VAR_7;

    FUNC_1();
    FUNC_2("%p", VAR_7);


    if (VAR_9->idle_pipes.head ||
        VAR_9->active_pipes[VAR_6].head ||
        VAR_9->active_pipes[VAR_5].head ||
        VAR_9->active_pipes[VAR_4].head ||
        VAR_9->active_pipes[VAR_3].head)
        FUNC_3(VAR_1);






    VAR_8.u64 = FUNC_4(VAR_9, FUNC_0(VAR_9->index));
    VAR_8.s.enable = 1;
    VAR_8.s.por = 1;
    VAR_8.s.hclk_rst = 1;
    VAR_8.s.prst = 0;
    VAR_8.s.hrst = 0;
    FUNC_5(VAR_9, FUNC_0(VAR_9->index),
                           VAR_8.u64);
    FUNC_3(VAR_2);
}
