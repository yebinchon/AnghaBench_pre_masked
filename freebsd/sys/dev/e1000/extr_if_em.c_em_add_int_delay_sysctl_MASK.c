
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em_int_delay_info {int offset; int value; struct adapter* adapter; } ;
struct adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char const*,int,struct em_int_delay_info*,int ,int ,char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct adapter *VAR_4, const char *VAR_5,
 const char *VAR_6, struct em_int_delay_info *VAR_7,
 int VAR_8, int VAR_9)
{
 VAR_7->adapter = VAR_4;
 VAR_7->offset = VAR_8;
 VAR_7->value = VAR_9;
 FUNC_0(FUNC_2(VAR_4->dev),
     FUNC_1(FUNC_3(VAR_4->dev)),
     VAR_2, VAR_5, VAR_1|VAR_0,
     VAR_7, 0, VAR_3, "I", VAR_6);
}
