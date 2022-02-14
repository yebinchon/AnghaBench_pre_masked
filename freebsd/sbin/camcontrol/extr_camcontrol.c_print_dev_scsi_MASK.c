
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vendor ;
struct TYPE_2__ {int revision; int product; int vendor; } ;
struct device_match_result {TYPE_1__ inq_data; } ;
typedef int revision ;
typedef int product ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct device_match_result *VAR_0, char *VAR_1)
{
 char VAR_2[16], VAR_3[48], VAR_4[16];

 FUNC_0(VAR_2, VAR_0->inq_data.vendor,
     sizeof(VAR_0->inq_data.vendor), sizeof(VAR_2));
 FUNC_0(VAR_3, VAR_0->inq_data.product,
     sizeof(VAR_0->inq_data.product), sizeof(VAR_3));
 FUNC_0(VAR_4, VAR_0->inq_data.revision,
     sizeof(VAR_0->inq_data.revision), sizeof(VAR_4));
 FUNC_1(VAR_1, "<%s %s %s>", VAR_2, VAR_3, VAR_4);

 return (0);
}
