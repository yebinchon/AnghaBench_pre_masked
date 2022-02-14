
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct nameserver* ns; } ;
struct nameserver {scalar_t__ requests_inflight; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct request *VAR_0, struct nameserver *VAR_1) {
 if (VAR_1 && VAR_0->ns != VAR_1) {
  FUNC_0(VAR_0->ns->requests_inflight > 0);
  VAR_0->ns->requests_inflight--;
  VAR_1->requests_inflight++;

  VAR_0->ns = VAR_1;
 }
}
