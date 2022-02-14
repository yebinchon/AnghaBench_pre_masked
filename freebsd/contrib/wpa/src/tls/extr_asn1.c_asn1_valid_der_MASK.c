
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_hdr {scalar_t__ class; scalar_t__ tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct asn1_hdr*) ;

__attribute__((used)) static int FUNC_1(struct asn1_hdr *VAR_2)
{
 if (VAR_2->class != VAR_0)
  return 1;
 if (VAR_2->tag == VAR_1 && !FUNC_0(VAR_2))
  return 0;
 return 1;
}
