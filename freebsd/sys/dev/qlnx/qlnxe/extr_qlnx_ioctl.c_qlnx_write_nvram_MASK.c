
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int data_len; int * data; int offset; } ;
typedef TYPE_1__ qlnx_nvram_t ;
struct TYPE_9__ {int mcp_nvm_resp; } ;
struct TYPE_8__ {TYPE_5__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int *,int ,int,...) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(qlnx_host_t *VAR_2, qlnx_nvram_t *VAR_3, uint32_t VAR_4)
{
 uint8_t *VAR_5;
 int VAR_6 = 0;

 if ((VAR_3->data == ((void*)0)) || (VAR_3->data_len == 0))
  return (VAR_0);

 VAR_5 = FUNC_4(VAR_3->data_len);

 VAR_6 = FUNC_1(VAR_3->data, VAR_5, VAR_3->data_len);

 FUNC_0(VAR_2, "issue cmd = 0x%x data = %p 		 data_len = 0x%x ret = 0x%x exit\n",

  VAR_4, VAR_3->data, VAR_3->data_len, VAR_6);

 if (VAR_6 == 0) {
  VAR_6 = FUNC_2(&VAR_2->cdev, VAR_4,
   VAR_3->offset, VAR_5, VAR_3->data_len);
 }

 FUNC_0(VAR_2, "cmd = 0x%x data = %p 		 data_len = 0x%x resp = 0x%x ret = 0x%x exit\n",

  VAR_4, VAR_3->data, VAR_3->data_len, VAR_2->cdev.mcp_nvm_resp, VAR_6);

 FUNC_3(VAR_5, VAR_1);

 return (VAR_6);
}
