
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int dname_len; int dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; scalar_t__ sin6_port; int sin6_family; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {size_t count; scalar_t__* rr_len; scalar_t__ security; scalar_t__* rr_data; } ;
struct delegpt {int dp_type_mlc; } ;
typedef int socklen_t ;
typedef int sa ;
typedef scalar_t__ in_port_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delegpt*,struct regional*,int ,int ,struct sockaddr_storage*,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct sockaddr_in6*,int ,int ) ;
 scalar_t__ VAR_3 ;

int
FUNC_5(struct delegpt* VAR_4, struct regional* VAR_5,
 struct ub_packed_rrset_key* VAR_6, uint8_t VAR_7)
{
        struct packed_rrset_data* VAR_8=(struct packed_rrset_data*)VAR_6->entry.data;
        size_t VAR_9;
        struct sockaddr_in6 VAR_10;
        socklen_t VAR_11 = (socklen_t)sizeof(VAR_10);
 FUNC_2(!VAR_4->dp_type_mlc);
        FUNC_4(&VAR_10, 0, VAR_11);
        VAR_10.sin6_family = VAR_0;
        VAR_10.sin6_port = (in_port_t)FUNC_1(VAR_2);
        for(VAR_9=0; VAR_9<VAR_8->count; VAR_9++) {
                if(VAR_8->rr_len[VAR_9] != 2 + VAR_1)
                        continue;
                FUNC_3(&VAR_10.sin6_addr, VAR_8->rr_data[VAR_9]+2, VAR_1);
                if(!FUNC_0(VAR_4, VAR_5, VAR_6->rk.dname,
                        VAR_6->rk.dname_len, (struct sockaddr_storage*)&VAR_10,
                        VAR_11, (VAR_8->security==VAR_3), VAR_7))
                        return 0;
        }
        return 1;
}
