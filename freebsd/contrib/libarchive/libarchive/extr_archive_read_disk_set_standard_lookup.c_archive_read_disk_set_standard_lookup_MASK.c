
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_cache {void* size; struct archive* archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,struct name_cache*,int ,int ) ;
 int FUNC_1 (struct archive*,struct name_cache*,int ,int ) ;
 int FUNC_2 (struct archive*,int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct name_cache*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct name_cache* FUNC_4 (int) ;
 int FUNC_5 (struct name_cache*,int ,int) ;
 void* VAR_6 ;

int
FUNC_6(struct archive *VAR_7)
{
 struct name_cache *VAR_8 = FUNC_4(sizeof(struct name_cache));
 struct name_cache *VAR_9 = FUNC_4(sizeof(struct name_cache));

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  FUNC_2(VAR_7, VAR_2,
      "Can't allocate uname/gname lookup cache");
  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
  return (VAR_0);
 }

 FUNC_5(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->archive = VAR_7;
 VAR_8->size = VAR_6;
 FUNC_5(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->archive = VAR_7;
 VAR_9->size = VAR_6;

 FUNC_0(VAR_7, VAR_9, VAR_4, VAR_3);
 FUNC_1(VAR_7, VAR_8, VAR_5, VAR_3);

 return (VAR_1);
}
