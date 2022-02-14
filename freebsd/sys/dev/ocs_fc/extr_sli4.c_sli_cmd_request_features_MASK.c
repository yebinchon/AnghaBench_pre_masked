
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int sli4_t ;
struct TYPE_8__ {int dword; } ;
typedef TYPE_3__ sli4_features_t ;
struct TYPE_7__ {int dword; } ;
struct TYPE_6__ {int command; } ;
struct TYPE_9__ {TYPE_2__ command; int qry; TYPE_1__ hdr; } ;
typedef TYPE_4__ sli4_cmd_request_features_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;

__attribute__((used)) static int32_t
FUNC_1(sli4_t *VAR_2, void *VAR_3, size_t VAR_4, sli4_features_t VAR_5, uint8_t VAR_6)
{
 sli4_cmd_request_features_t *VAR_7 = VAR_3;

 FUNC_0(VAR_3, 0, VAR_4);

 VAR_7->hdr.command = VAR_0;

 if (VAR_6) {
  VAR_7->qry = VAR_1;
 }
 VAR_7->command.dword = VAR_5.dword;

 return sizeof(sli4_cmd_request_features_t);
}
