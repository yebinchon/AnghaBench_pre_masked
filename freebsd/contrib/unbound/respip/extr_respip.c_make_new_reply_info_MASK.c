
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int * rrsets; int serve_expired_ttl; int prefetch_ttl; int ttl; int qdcount; int flags; } ;
struct regional {int dummy; } ;


 struct reply_info* FUNC_0 (struct regional*,int ,int ,int ,int ,int ,size_t,int ,int ,size_t,int ) ;
 int FUNC_1 (struct reply_info*,int *,struct regional*) ;
 int VAR_0 ;

__attribute__((used)) static struct reply_info *
FUNC_2(const struct reply_info* VAR_1, struct regional* VAR_2,
 size_t VAR_3, size_t VAR_4)
{
 struct reply_info* VAR_5;
 size_t VAR_6;






 VAR_5 = FUNC_0(VAR_2, VAR_1->flags,
  VAR_1->qdcount, VAR_1->ttl, VAR_1->prefetch_ttl,
  VAR_1->serve_expired_ttl, VAR_3, 0, 0, VAR_3,
  VAR_0);
 if(!VAR_5)
  return ((void*)0);
 if(!FUNC_1(VAR_5, ((void*)0), VAR_2))
  return ((void*)0);
 for(VAR_6=0; VAR_6<VAR_4; VAR_6++)
  VAR_5->rrsets[VAR_6] = VAR_1->rrsets[VAR_6];

 return VAR_5;
}
