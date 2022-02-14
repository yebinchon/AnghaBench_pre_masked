
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct p9_rdma_opts {int port; int sq_depth; int rq_depth; int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (int,int) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(char *VAR_9, struct p9_rdma_opts *VAR_10)
{
 char *VAR_11;
 substring_t VAR_12[VAR_2];
 int VAR_13;
 char *VAR_14;
 int VAR_15;

 VAR_10->port = VAR_4;
 VAR_10->sq_depth = VAR_6;
 VAR_10->rq_depth = VAR_5;
 VAR_10->timeout = VAR_7;

 if (!VAR_9)
  return 0;

 VAR_14 = FUNC_2(VAR_9, VAR_1);
 if (!VAR_14) {
  FUNC_0(VAR_3,
      "failed to allocate copy of option string\n");
  return -VAR_0;
 }

 while ((VAR_11 = FUNC_6(&VAR_14, ",")) != ((void*)0)) {
  int VAR_16;
  int VAR_17;
  if (!*VAR_11)
   continue;
  VAR_16 = FUNC_4(VAR_11, VAR_8, VAR_12);
  VAR_17 = FUNC_3(&VAR_12[0], &VAR_13);
  if (VAR_17 < 0) {
   FUNC_0(VAR_3,
       "integer field, but no integer?\n");
   VAR_15 = VAR_17;
   continue;
  }
  switch (VAR_16) {
  case 131:
   VAR_10->port = VAR_13;
   break;
  case 129:
   VAR_10->sq_depth = VAR_13;
   break;
  case 130:
   VAR_10->rq_depth = VAR_13;
   break;
  case 128:
   VAR_10->timeout = VAR_13;
   break;
  default:
   continue;
  }
 }

 VAR_10->rq_depth = FUNC_5(VAR_10->rq_depth, VAR_10->sq_depth);
 FUNC_1(VAR_14);
 return 0;
}
