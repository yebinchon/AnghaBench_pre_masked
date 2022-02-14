
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_16__ {int cmd; int offset; } ;
typedef TYPE_1__ qlnx_nvram_t ;
struct TYPE_15__ {int mcp_nvm_resp; } ;
struct TYPE_17__ {TYPE_11__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (TYPE_2__*,char*,int ,int) ;
 int FUNC_1 (TYPE_11__*,int ) ;
 int FUNC_2 (TYPE_11__*,int ) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_7(qlnx_host_t *VAR_3, qlnx_nvram_t *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4->cmd) {

 case 128:
  VAR_5 = FUNC_6(VAR_3, VAR_4, VAR_0);
  break;

 case 131:
  VAR_5 = FUNC_6(VAR_3, VAR_4, VAR_1);
  break;

 case 130:
  VAR_5 = FUNC_5(VAR_3, VAR_4);
  break;

 case 129:
  VAR_5 = FUNC_3(&VAR_3->cdev, VAR_4->offset);

  FUNC_0(VAR_3, "QLNX_NVRAM_CMD_SET_SECURE_MODE 			 resp = 0x%x ret = 0x%x exit\n",

    VAR_3->cdev.mcp_nvm_resp, VAR_5);
  break;

 case 134:
  VAR_5 = FUNC_1(&VAR_3->cdev, VAR_4->offset);

  FUNC_0(VAR_3, "QLNX_NVRAM_CMD_DEL_FILE 			 resp = 0x%x ret = 0x%x exit\n",

   VAR_3->cdev.mcp_nvm_resp, VAR_5);
  break;

 case 132:
  VAR_5 = FUNC_2(&VAR_3->cdev, VAR_4->offset);

  FUNC_0(VAR_3, "QLNX_NVRAM_CMD_PUT_FILE_BEGIN 			 resp = 0x%x ret = 0x%x exit\n",

   VAR_3->cdev.mcp_nvm_resp, VAR_5);
  break;

 case 133:
  VAR_5 = FUNC_4(VAR_3, VAR_4);
  break;

 default:
  VAR_5 = VAR_2;
  break;
 }

 return (VAR_5);
}
