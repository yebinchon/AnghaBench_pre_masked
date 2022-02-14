
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnep_session {struct bnep_proto_filter* proto_filter; } ;
struct bnep_proto_filter {void* end; void* start; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_5 ;
 int FUNC_1 (struct bnep_session*,int ,int ) ;
 int FUNC_2 (struct bnep_session*) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (struct bnep_proto_filter*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct bnep_session *VAR_6, __be16 *VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_8 < 2)
  return -VAR_5;

 VAR_9 = FUNC_3(VAR_7);
 VAR_7++; VAR_8 -= 2;

 if (VAR_8 < VAR_9)
  return -VAR_5;

 FUNC_0("filter len %d", VAR_9);
 FUNC_1(VAR_6, VAR_1, VAR_2);

 return 0;
}
