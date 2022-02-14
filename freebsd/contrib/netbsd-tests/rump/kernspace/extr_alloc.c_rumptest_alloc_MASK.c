
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char**) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int *,int ,int *,int *,char*) ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_10 ;
 char* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,int ,int ,int ,char*,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 char** VAR_13 ;

void
FUNC_11(size_t VAR_14)
{
 char *VAR_15;
 int VAR_16, VAR_17;

 FUNC_7(&VAR_9, VAR_2, VAR_0);
 FUNC_1(&VAR_8, "venailu");

 FUNC_4(VAR_3, VAR_1, ((void*)0), VAR_7, ((void*)0), ((void*)0), "h");

 FUNC_10(&VAR_11, 1024, 0, 0, 0, "vara-allas",
     &VAR_10, VAR_0);
 FUNC_10(&VAR_12, 1024, 0, 0, 0, "allas",
     &VAR_10, VAR_0);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++) {
  VAR_13[VAR_17] = FUNC_9(&VAR_11, VAR_4);
  if (VAR_13[VAR_17] == ((void*)0)) {
   FUNC_8("pool_get store failed");
  }
 }


 FUNC_5(&VAR_9);
 while (VAR_6 == 0)
  FUNC_3(&VAR_8, &VAR_9);
 FUNC_6(&VAR_9);

 for (VAR_16 = 0;; VAR_16++) {
  if (VAR_16 * 1024 > VAR_14)
   FUNC_8("managed to allocate over limit");
  if ((VAR_15 = FUNC_9(&VAR_12, VAR_4)) == ((void*)0)) {
   FUNC_5(&VAR_9);
   VAR_6++;
   FUNC_2(&VAR_8);
   FUNC_6(&VAR_9);
   if (FUNC_9(&VAR_12, VAR_5) == ((void*)0))
    FUNC_8("pool get PR_WAITOK failed");
   break;
  }
  *VAR_15 = 'a';
 }
}
