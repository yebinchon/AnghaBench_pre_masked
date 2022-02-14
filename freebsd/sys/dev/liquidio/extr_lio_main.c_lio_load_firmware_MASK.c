
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {int dummy; } ;
struct firmware {int datasize; int data; } ;
struct TYPE_2__ {char* card_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 struct firmware* FUNC_0 (char*) ;
 int FUNC_1 (struct firmware const*,int ) ;
 char* VAR_6 ;
 int FUNC_2 (struct octeon_device*,char*,char*) ;
 int FUNC_3 (struct octeon_device*,int ,int ) ;
 TYPE_1__* FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (char*,char*,char*,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct octeon_device *VAR_7)
{
 const struct firmware *VAR_8;
 char *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 char VAR_11[VAR_5];

 if (VAR_6[0] == '\0')
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_6;

 FUNC_5(VAR_11, "%s%s_%s%s", VAR_2,
  FUNC_4(VAR_7)->card_name, VAR_9, VAR_3);

 VAR_8 = FUNC_0(VAR_11);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_7, "Request firmware failed. Could not find file %s.\n",
       VAR_11);
  return (VAR_0);
 }

 VAR_10 = FUNC_3(VAR_7, VAR_8->data, VAR_8->datasize);

 FUNC_1(VAR_8, VAR_1);

 return (VAR_10);
}
