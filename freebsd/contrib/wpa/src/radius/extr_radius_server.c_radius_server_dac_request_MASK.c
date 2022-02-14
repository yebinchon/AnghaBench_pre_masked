
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int nas; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct radius_server_data {int auth_sock; int db; } ;
struct radius_msg {int dummy; } ;
struct radius_client {int pending_dac_disconnect_id; int pending_dac_coa_id; int pending_dac_coa_addr; struct radius_msg* pending_dac_coa_req; int pending_dac_disconnect_addr; struct radius_msg* pending_dac_disconnect_req; int shared_secret_len; scalar_t__ shared_secret; int next_dac_identifier; } ;
struct os_time {int sec; } ;
struct db_session_fields {TYPE_1__ sin_addr; int sin_port; int nas; int sin_family; } ;
typedef int fields ;
typedef int das ;
typedef int addrtxt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct sockaddr_in*) ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct os_time*) ;
 int FUNC_8 (int ,int*,int) ;
 int FUNC_9 (struct sockaddr_in*,int ,int) ;
 int FUNC_10 (char*,int,int ,int ) ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char const*,char*,int) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (struct radius_msg*,int ,int*,int ) ;
 int FUNC_16 (struct radius_msg*,int ,int ) ;
 int FUNC_17 (struct radius_msg*,int ,int*,int) ;
 int FUNC_18 (struct radius_msg*) ;
 int FUNC_19 (struct radius_msg*,int*,int ) ;
 int FUNC_20 (struct radius_msg*) ;
 struct wpabuf* FUNC_21 (struct radius_msg*) ;
 struct radius_msg* FUNC_22 (int ,int) ;
 struct radius_client* FUNC_23 (struct radius_server_data*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_24 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,char*,int ,struct sockaddr_in*,int *) ;
 int FUNC_27 (char*) ;
 char* FUNC_28 (char*,char*) ;
 int FUNC_29 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_30 (struct wpabuf*) ;
 int FUNC_31 (struct wpabuf*) ;

int FUNC_32(struct radius_server_data *VAR_14, const char *VAR_15)
{
 return -1;

}
