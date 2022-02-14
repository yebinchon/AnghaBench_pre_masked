
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xref ;
struct endpoint {int reg; int slave; scalar_t__ dev_node; int their_node; scalar_t__ my_node; } ;
struct coresight_platform_data {int mtx_lock; int endpoints; int out_ports; int in_ports; } ;
typedef int port_reg ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,struct endpoint*,int ) ;
 int VAR_3 ;
 struct endpoint* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_14(phandle_t VAR_4,
    struct coresight_platform_data *VAR_5)
{
 phandle_t VAR_6, VAR_7;
 pcell_t VAR_8;
 phandle_t VAR_9;
 char *VAR_10;
 int VAR_11;
 phandle_t VAR_12;
 struct endpoint *VAR_13;

 VAR_7 = FUNC_10(VAR_4, "ports");
 if (VAR_7)
  VAR_6 = VAR_7;
 else
  VAR_6 = VAR_4;

 for (VAR_7 = FUNC_0(VAR_6); VAR_7 != 0; VAR_7 = FUNC_5(VAR_7)) {
  VAR_11 = FUNC_2(VAR_7, "name", (void **)&VAR_10);
  if (VAR_11 == -1)
   continue;

  if (FUNC_12(VAR_10, "port") ||
      FUNC_13(VAR_10, "port@", 6)) {

   VAR_8 = -1;
   FUNC_1(VAR_7, "reg", (void *)&VAR_8, sizeof(VAR_8));

   VAR_12 = FUNC_10(VAR_7, "endpoint");
   if (VAR_12) {
    if (FUNC_1(VAR_12, "remote-endpoint", &VAR_9,
        sizeof(VAR_9)) == -1) {
     FUNC_11("failed\n");
     continue;
    }
    VAR_13 = FUNC_7(sizeof(struct endpoint), VAR_0,
        VAR_1 | VAR_2);
    VAR_13->my_node = VAR_12;
    VAR_13->their_node = FUNC_4(VAR_9);
    VAR_13->dev_node = VAR_4;
    VAR_13->reg = VAR_8;
    if (FUNC_3(VAR_12, "slave-mode") >= 0) {
     VAR_5->in_ports++;
     VAR_13->slave = 1;
    } else {
     VAR_5->out_ports++;
    }

    FUNC_8(&VAR_5->mtx_lock);
    FUNC_6(&VAR_5->endpoints, VAR_13, VAR_3);
    FUNC_9(&VAR_5->mtx_lock);
   }
  }
 }

 return (0);
}
