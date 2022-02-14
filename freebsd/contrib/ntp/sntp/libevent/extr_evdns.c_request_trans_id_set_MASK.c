
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct request {scalar_t__ request; int trans_id; } ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void
FUNC_1(struct request *const VAR_0, const u16 VAR_1) {
 VAR_0->trans_id = VAR_1;
 *((u16 *) VAR_0->request) = FUNC_0(VAR_1);
}
