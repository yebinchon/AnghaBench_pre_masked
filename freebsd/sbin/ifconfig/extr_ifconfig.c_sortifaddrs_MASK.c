
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {struct ifaddrs* ifa_next; } ;
struct ifa_queue {int dummy; } ;



__attribute__((used)) static struct ifaddrs *
FUNC_0(struct ifaddrs *VAR_0,
    int (*VAR_1)(struct ifaddrs *, struct ifaddrs *, struct ifa_queue *),
    struct ifa_queue *VAR_2)
{
 struct ifaddrs *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_3 = VAR_0;
 VAR_4 = VAR_0;
 VAR_5 = VAR_0;
 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);

 if (!VAR_0 || !VAR_0->ifa_next)
  return (VAR_0);

 while (VAR_4 && VAR_4->ifa_next) {
  VAR_5 = VAR_3;
  VAR_3 = VAR_3->ifa_next;
  VAR_4 = VAR_4->ifa_next->ifa_next;
 }

 VAR_5->ifa_next = ((void*)0);

 VAR_0 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3 = FUNC_0(VAR_3, VAR_1, VAR_2);

 while (VAR_0 || VAR_3) {

  if (!VAR_3) {
   VAR_7 = VAR_0;
   VAR_0 = VAR_0->ifa_next;
  } else if (!VAR_0) {
   VAR_7 = VAR_3;
   VAR_3 = VAR_3->ifa_next;
  } else if (VAR_1(VAR_0, VAR_3, VAR_2) <= 0) {
   VAR_7 = VAR_0;
   VAR_0 = VAR_0->ifa_next;
  } else {
   VAR_7 = VAR_3;
   VAR_3 = VAR_3->ifa_next;
  }

  if (!VAR_6)
   VAR_6 = VAR_7;
  else
   VAR_8->ifa_next = VAR_7;

  VAR_8 = VAR_7;
 }

 return (VAR_6);
}
