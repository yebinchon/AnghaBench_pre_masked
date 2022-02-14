
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ipmi_request {int dummy; } ;
struct ipmi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipmi_request*,struct ipmi_device*,long,int ,int ,size_t,size_t) ;
 struct ipmi_request* FUNC_1 (int,int ,int) ;

struct ipmi_request *
FUNC_2(struct ipmi_device *VAR_3, long VAR_4, uint8_t VAR_5,
    uint8_t VAR_6, size_t VAR_7, size_t VAR_8)
{
 struct ipmi_request *VAR_9;

 VAR_9 = FUNC_1(sizeof(struct ipmi_request) + VAR_7 + VAR_8,
     VAR_0, VAR_1 | VAR_2);
 FUNC_0(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return (VAR_9);
}
