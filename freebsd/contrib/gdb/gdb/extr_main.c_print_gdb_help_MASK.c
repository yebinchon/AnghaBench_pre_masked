
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct ui_file*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2 (struct ui_file *VAR_1)
{
  FUNC_1 (FUNC_0("This is the GNU debugger.  Usage:\n\n    gdb [options] [executable-file [core-file or process-id]]\n    gdb [options] --args executable-file [inferior-arguments ...]\n\nOptions:\n\n"), VAR_1);





  FUNC_1 (FUNC_0("  --args             Arguments after executable-file are passed to inferior\n"), VAR_1);


  FUNC_1 (FUNC_0("  --[no]async        Enable (disable) asynchronous version of CLI\n"), VAR_1);


  FUNC_1 (FUNC_0("  -b BAUDRATE        Set serial port baud rate used for remote debugging.\n  --batch            Exit after processing options.\n  --cd=DIR           Change current directory to DIR.\n  --command=FILE     Execute GDB commands from FILE.\n  --core=COREFILE    Analyze the core dump COREFILE.\n  --pid=PID          Attach to running process PID.\n"), VAR_1);







  FUNC_1 (FUNC_0("  --dbx              DBX compatibility mode.\n  --directory=DIR    Search for source files in DIR.\n  --epoch            Output information used by epoch emacs-GDB interface.\n  --exec=EXECFILE    Use EXECFILE as the executable.\n  --fullname         Output information used by emacs-GDB interface.\n  --help             Print this message.\n"), VAR_1);







  FUNC_1 (FUNC_0("  --interpreter=INTERP\n                     Select a specific interpreter / user interface\n"), VAR_1);



  FUNC_1 (FUNC_0("  --mapped           Use mapped symbol files if supported on this system.\n  --nw		     Do not use a window interface.\n  --nx               Do not read "), VAR_1);



  FUNC_1 (VAR_0, VAR_1);
  FUNC_1 (FUNC_0(" file.\n  --quiet            Do not print version number on startup.\n  --readnow          Fully read symbol files on first access.\n"), VAR_1);



  FUNC_1 (FUNC_0("  --se=FILE          Use FILE as symbol file and executable file.\n  --symbols=SYMFILE  Read symbols from SYMFILE.\n  --tty=TTY          Use TTY for input/output by the program being debugged.\n"), VAR_1);
  FUNC_1 (FUNC_0("  --version          Print version information and then exit.\n  -w                 Use a window interface.\n  --write            Set writing into executable and core files.\n  --xdb              XDB compatibility mode.\n"), VAR_1);





  FUNC_1 (FUNC_0("\nFor more information, type \"help\" from within GDB, or consult the\nGDB manual (available as on-line info or a printed manual).\nReport bugs to \"bug-gdb@gnu.org\"."), VAR_1);




}
