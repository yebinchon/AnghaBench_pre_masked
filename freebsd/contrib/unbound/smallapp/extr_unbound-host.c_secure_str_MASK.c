
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int rcode; scalar_t__ bogus; scalar_t__ secure; } ;



__attribute__((used)) static const char*
FUNC_0(struct ub_result* VAR_0)
{
 if(VAR_0->rcode != 0 && VAR_0->rcode != 3) return "(error)";
 if(VAR_0->secure) return "(secure)";
 if(VAR_0->bogus) return "(BOGUS (security failure))";
 return "(insecure)";
}
