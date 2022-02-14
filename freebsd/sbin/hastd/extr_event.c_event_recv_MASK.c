
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nv {int dummy; } ;
struct hast_resource {int hr_event; int hr_name; int hr_exec; int hr_role; } ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct nv**) ;
 int FUNC_2 (struct hast_resource const*,int ,struct nv*,int *,int ) ;
 int FUNC_3 (int ,char const*,int ,int *) ;
 int FUNC_4 (struct nv*,int ,char*) ;
 struct nv* FUNC_5 () ;
 int FUNC_6 (struct nv*) ;
 int FUNC_7 (struct nv*) ;
 int FUNC_8 (struct nv*,char*) ;
 int FUNC_9 (int ,int,int,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (int ) ;

int
FUNC_14(const struct hast_resource *VAR_4)
{
 struct nv *VAR_5, *VAR_6;
 const char *VAR_7;
 uint8_t VAR_8;
 int VAR_9;

 FUNC_0(VAR_4 != ((void*)0));

 VAR_5 = VAR_6 = ((void*)0);

 if (FUNC_1(VAR_4->hr_event, &VAR_5) == -1) {




  FUNC_9(VAR_1, 1, VAR_3,
      "Unable to receive event header");
  goto fail;
 }

 VAR_8 = FUNC_8(VAR_5, "event");
 if (VAR_8 == VAR_0) {
  FUNC_11("Event header is missing 'event' field.");
  goto fail;
 }

 switch (VAR_8) {
 case 133:
  VAR_7 = "connect";
  break;
 case 132:
  VAR_7 = "disconnect";
  break;
 case 128:
  VAR_7 = "syncstart";
  break;
 case 130:
  VAR_7 = "syncdone";
  break;
 case 129:
  VAR_7 = "syncintr";
  break;
 case 131:
  VAR_7 = "split-brain";
  break;
 default:
  FUNC_11("Event header contain invalid event number (%hhu).",
      VAR_8);
  goto fail;
 }

 FUNC_12("[%s] (%s) ", VAR_4->hr_name, FUNC_13(VAR_4->hr_role));
 FUNC_3(VAR_4->hr_exec, VAR_7, VAR_4->hr_name, ((void*)0));
 FUNC_12("%s", "");

 VAR_6 = FUNC_5();
 FUNC_4(VAR_6, 0, "error");
 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9 != 0) {
  FUNC_9(VAR_2, 0, VAR_9,
      "Unable to prepare event header");
  goto fail;
 }
 if (FUNC_2(VAR_4, VAR_4->hr_event, VAR_6, ((void*)0), 0) == -1) {
  FUNC_10(VAR_2, "Unable to send event header");
  goto fail;
 }
 FUNC_7(VAR_5);
 FUNC_7(VAR_6);
 return (0);
fail:
 if (VAR_5 != ((void*)0))
  FUNC_7(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_7(VAR_6);
 return (-1);
}
