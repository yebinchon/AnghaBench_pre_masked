
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct pci_driver {int name; } ;
struct pci_dev {TYPE_2__* resource; int irq; int device; int vendor; int devfn; TYPE_1__* bus; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int flags; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 struct pci_driver* FUNC_0 (struct pci_dev const*) ;
 int FUNC_1 (struct pci_dev const*,int,TYPE_2__*,int*,int*) ;
 scalar_t__ FUNC_2 (struct trace_seq*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct trace_seq *VAR_1, const struct pci_dev *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 resource_size_t VAR_5, VAR_6;
 const struct pci_driver *VAR_7 = FUNC_0(VAR_2);


 VAR_3 += FUNC_2(VAR_1, "PCIDEV %02x%02x %04x%04x %x",
    VAR_2->bus->number, VAR_2->devfn,
    VAR_2->vendor, VAR_2->device, VAR_2->irq);





 for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
  FUNC_1(VAR_2, VAR_4, &VAR_2->resource[VAR_4], &VAR_5, &VAR_6);
  VAR_3 += FUNC_2(VAR_1, " %llx",
   (unsigned long long)(VAR_5 |
   (VAR_2->resource[VAR_4].flags & VAR_0)));
 }
 for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
  FUNC_1(VAR_2, VAR_4, &VAR_2->resource[VAR_4], &VAR_5, &VAR_6);
  VAR_3 += FUNC_2(VAR_1, " %llx",
   VAR_2->resource[VAR_4].start < VAR_2->resource[VAR_4].end ?
   (unsigned long long)(VAR_6 - VAR_5) + 1 : 0);
 }
 if (VAR_7)
  VAR_3 += FUNC_2(VAR_1, " %s\n", VAR_7->name);
 else
  VAR_3 += FUNC_2(VAR_1, " \n");
 return VAR_3;
}
