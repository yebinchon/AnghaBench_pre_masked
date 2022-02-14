
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {int ai_flags; scalar_t__ ai_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_1(struct evutil_addrinfo *VAR_7)
{
 if (!(VAR_7->ai_flags & VAR_0))
  return;
 if (VAR_7->ai_family != VAR_3)
  return;
 if (!VAR_6)
  FUNC_0(0);
 if (VAR_4 && !VAR_5) {
  VAR_7->ai_family = VAR_1;
 } else if (!VAR_4 && VAR_5) {
  VAR_7->ai_family = VAR_2;
 }
}
