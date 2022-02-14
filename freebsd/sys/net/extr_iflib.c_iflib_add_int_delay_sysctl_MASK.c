
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* if_int_delay_info_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_7__ {int ifc_dev; } ;
struct TYPE_6__ {int iidi_offset; int iidi_value; TYPE_2__* iidi_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char const*,int,TYPE_1__*,int ,int ,char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

void
FUNC_4(if_ctx_t VAR_4, const char *VAR_5,
 const char *VAR_6, if_int_delay_info_t VAR_7,
 int VAR_8, int VAR_9)
{
 VAR_7->iidi_ctx = VAR_4;
 VAR_7->iidi_offset = VAR_8;
 VAR_7->iidi_value = VAR_9;
 FUNC_0(FUNC_2(VAR_4->ifc_dev),
     FUNC_1(FUNC_3(VAR_4->ifc_dev)),
     VAR_2, VAR_5, VAR_1|VAR_0,
     VAR_7, 0, VAR_3, "I", VAR_6);
}
