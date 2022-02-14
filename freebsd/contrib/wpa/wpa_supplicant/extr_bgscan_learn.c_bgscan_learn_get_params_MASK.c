
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgscan_learn_data {int fname; void* long_interval; void* signal_threshold; void* short_interval; } ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct bgscan_learn_data *VAR_1,
       const char *VAR_2)
{
 const char *VAR_3;

 VAR_1->short_interval = FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_2, ':');
 if (VAR_3 == ((void*)0))
  return 0;
 VAR_3++;
 VAR_1->signal_threshold = FUNC_0(VAR_3);
 VAR_3 = FUNC_1(VAR_3, ':');
 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_0, "bgscan learn: Missing scan interval "
      "for high signal");
  return -1;
 }
 VAR_3++;
 VAR_1->long_interval = FUNC_0(VAR_3);
 VAR_3 = FUNC_1(VAR_3, ':');
 if (VAR_3) {
  VAR_3++;
  VAR_1->fname = FUNC_2(VAR_3);
 }

 return 0;
}
