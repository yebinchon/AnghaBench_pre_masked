
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int encod; scalar_t__ dpll; } ;
struct TYPE_10__ {scalar_t__ llm; scalar_t__ ext1x; } ;
struct TYPE_12__ {TYPE_2__ rcor; TYPE_1__ tcor; } ;
struct TYPE_13__ {scalar_t__ type; int mode; int txbaud; int rxbaud; TYPE_3__ opt; } ;
typedef TYPE_4__ cx_chan_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

int FUNC_4 (cx_chan_t *VAR_7, int VAR_8)
{
 if (VAR_8 == VAR_2) {
  if (VAR_7->type == VAR_3)
   return -1;

  if (VAR_7->mode == VAR_2)
   return 0;

  VAR_7->mode = VAR_2;
 } else if (VAR_8 == VAR_1) {
  if (VAR_7->type == VAR_4 ||
      VAR_7->type == VAR_6 ||
      VAR_7->type == VAR_5)
   return -1;

  if (VAR_7->mode == VAR_1)
   return 0;

  VAR_7->mode = VAR_1;
  VAR_7->opt.tcor.ext1x = 0;
  VAR_7->opt.tcor.llm = 0;
  VAR_7->opt.rcor.dpll = 0;
  VAR_7->opt.rcor.encod = VAR_0;
  if (! VAR_7->txbaud || ! VAR_7->rxbaud)
   VAR_7->txbaud = VAR_7->rxbaud = 9600;
 } else
  return -1;

 FUNC_2 (VAR_7);
 FUNC_3 (VAR_7, 0, 0);
 FUNC_0 (VAR_7, 0);
 FUNC_1 (VAR_7, 0);
 return 0;
}
