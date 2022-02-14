
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nv {int dummy; } ;
struct hast_resource {int hr_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct nv**) ;
 int FUNC_2 (struct hast_resource const*,int ,struct nv*,int *,int ) ;
 int FUNC_3 (struct nv*,int ,char*) ;
 struct nv* FUNC_4 () ;
 int FUNC_5 (struct nv*) ;
 int FUNC_6 (struct nv*) ;
 int FUNC_7 (int ,int ,int,char*) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9(const struct hast_resource *VAR_3, int VAR_4)
{
 struct nv *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 >= VAR_1 && VAR_4 <= VAR_0);

 VAR_5 = VAR_6 = ((void*)0);




 VAR_6 = FUNC_4();
 FUNC_3(VAR_6, (uint8_t)VAR_4, "event");
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 != 0) {
  FUNC_7(VAR_2, 0, VAR_7,
      "Unable to prepare event header");
  goto done;
 }
 if (FUNC_2(VAR_3, VAR_3->hr_event, VAR_6, ((void*)0), 0) == -1) {
  FUNC_8(VAR_2, "Unable to send event header");
  goto done;
 }
 if (FUNC_1(VAR_3->hr_event, &VAR_5) == -1) {
  FUNC_8(VAR_2, "Unable to receive event header");
  goto done;
 }




done:
 if (VAR_5 != ((void*)0))
  FUNC_6(VAR_5);
 if (VAR_6 != ((void*)0))
  FUNC_6(VAR_6);
}
