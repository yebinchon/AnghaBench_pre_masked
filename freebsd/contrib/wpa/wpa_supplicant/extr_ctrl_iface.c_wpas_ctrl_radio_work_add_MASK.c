
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ ext_work_id; } ;
struct wpa_external_work {char* type; scalar_t__ id; void* timeout; } ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (struct wpa_external_work*) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,size_t,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (size_t,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*,int) ;
 size_t FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 struct wpa_external_work* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct wpa_supplicant*,unsigned int,char*,int ,int ,struct wpa_external_work*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_11(struct wpa_supplicant *VAR_1, char *VAR_2,
        char *VAR_3, size_t VAR_4)
{
 struct wpa_external_work *VAR_5;
 char *VAR_6, *VAR_7;
 size_t VAR_8;
 int VAR_9;
 unsigned int VAR_10 = 0;



 VAR_5 = FUNC_9(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_6 = FUNC_5(VAR_2, ' ');
 if (VAR_6) {
  VAR_8 = VAR_6 - VAR_2;
  VAR_6++;

  VAR_7 = FUNC_8(VAR_6, "freq=");
  if (VAR_7)
   VAR_10 = FUNC_0(VAR_7 + 5);

  VAR_7 = FUNC_8(VAR_6, "timeout=");
  if (VAR_7)
   VAR_5->timeout = FUNC_0(VAR_7 + 8);
 } else {
  VAR_8 = FUNC_7(VAR_2);
 }
 if (4 + VAR_8 >= sizeof(VAR_5->type))
  VAR_8 = sizeof(VAR_5->type) - 4 - 1;
 FUNC_6(VAR_5->type, "ext:", sizeof(VAR_5->type));
 FUNC_2(VAR_5->type + 4, VAR_2, VAR_8);
 VAR_5->type[4 + VAR_8] = '\0';

 VAR_1->ext_work_id++;
 if (VAR_1->ext_work_id == 0)
  VAR_1->ext_work_id++;
 VAR_5->id = VAR_1->ext_work_id;

 if (FUNC_10(VAR_1, VAR_10, VAR_5->type, 0, VAR_0,
      VAR_5) < 0) {
  FUNC_1(VAR_5);
  return -1;
 }

 VAR_9 = FUNC_3(VAR_3, VAR_4, "%u", VAR_5->id);
 if (FUNC_4(VAR_4, VAR_9))
  return -1;
 return VAR_9;
}
