
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * switcher; } ;
struct archive_read {TYPE_1__ client; } ;
struct archive {int dummy; } ;
typedef int archive_switch_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3,
    archive_switch_callback *VAR_4)
{
 struct archive_read *VAR_5 = (struct archive_read *)VAR_3;
 FUNC_0(VAR_3, VAR_1, VAR_2,
     "archive_read_set_switch_callback");
 VAR_5->client.switcher = VAR_4;
 return VAR_0;
}
