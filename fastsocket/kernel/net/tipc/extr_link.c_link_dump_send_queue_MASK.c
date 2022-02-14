
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {scalar_t__ first_out; scalar_t__ next_out; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct link *VAR_0)
{
 if (VAR_0->next_out) {
  FUNC_1("\nContents of unsent queue:\n");
  FUNC_0(VAR_0->next_out);
 }
 FUNC_1("\nContents of send queue:\n");
 if (VAR_0->first_out) {
  FUNC_0(VAR_0->first_out);
 }
 FUNC_1("Empty send queue\n");
}
