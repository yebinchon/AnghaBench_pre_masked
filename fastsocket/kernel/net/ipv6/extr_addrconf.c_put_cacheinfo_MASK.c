
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct ifa_cacheinfo {void* ifa_valid; void* ifa_prefered; void* tstamp; void* cstamp; } ;
typedef int ci ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int,struct ifa_cacheinfo*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct ifa_cacheinfo VAR_8;

 VAR_8.cstamp = (u32)(FUNC_0(VAR_4, VAR_2) / VAR_0 * 100
   + FUNC_0(VAR_4, VAR_2) % VAR_0 * 100 / VAR_0);
 VAR_8.tstamp = (u32)(FUNC_0(VAR_5, VAR_2) / VAR_0 * 100
   + FUNC_0(VAR_5, VAR_2) % VAR_0 * 100 / VAR_0);
 VAR_8.ifa_prefered = VAR_6;
 VAR_8.ifa_valid = VAR_7;

 return FUNC_1(VAR_3, VAR_1, sizeof(VAR_8), &VAR_8);
}
