
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;

void
FUNC_4 (void)
{
  FUNC_3 ();
  FUNC_2 (&VAR_2);

  FUNC_1 ("dos", VAR_0, VAR_1,
    "Print information specific to DJGPP (aka MS-DOS) debugging.",
    &VAR_10, "info dos ", 0, &VAR_11);

  FUNC_0 ("sysinfo", VAR_0, VAR_9,
     "Display information about the target system, including CPU, OS, DPMI, etc.",
    &VAR_10);
  FUNC_0 ("ldt", VAR_0, VAR_8,
    "Display entries in the LDT (Local Descriptor Table).\n"
    "Entry number (an expression) as an argument means display only that entry.",
    &VAR_10);
  FUNC_0 ("gdt", VAR_0, VAR_6,
    "Display entries in the GDT (Global Descriptor Table).\n"
    "Entry number (an expression) as an argument means display only that entry.",
    &VAR_10);
  FUNC_0 ("idt", VAR_0, VAR_7,
    "Display entries in the IDT (Interrupt Descriptor Table).\n"
    "Entry number (an expression) as an argument means display only that entry.",
    &VAR_10);
  FUNC_0 ("pde", VAR_0, VAR_3,
    "Display entries in the Page Directory.\n"
    "Entry number (an expression) as an argument means display only that entry.",
    &VAR_10);
  FUNC_0 ("pte", VAR_0, VAR_4,
    "Display entries in Page Tables.\n"
    "Entry number (an expression) as an argument means display only entries\n"
    "from the Page Table pointed to by the specified Page Directory entry.",
    &VAR_10);
  FUNC_0 ("address-pte", VAR_0, VAR_5,
    "Display a Page Table entry for a linear address.\n"
    "The address argument must be a linear address, after adding to\n"
    "it the base address of the appropriate segment.\n"
    "The base address of variables and functions in the debuggee's data\n"
    "or code segment is stored in the variable __djgpp_base_address,\n"
    "so use `__djgpp_base_address + (char *)&var' as the argument.\n"
    "For other segments, look up their base address in the output of\n"
    "the `info dos ldt' command.",
    &VAR_10);
}
