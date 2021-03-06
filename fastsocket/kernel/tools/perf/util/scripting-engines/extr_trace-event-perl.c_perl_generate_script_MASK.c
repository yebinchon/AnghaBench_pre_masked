
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent {int dummy; } ;
struct format_field {char* name; int flags; struct format_field* next; } ;
struct TYPE_2__ {struct format_field* fields; } ;
struct event_format {char* system; char* name; TYPE_1__ format; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,char*,char const*) ;
 int * VAR_5 ;
 struct event_format* FUNC_4 (struct pevent*,struct event_format*) ;

__attribute__((used)) static int FUNC_5(struct pevent *VAR_6, const char *VAR_7)
{
 struct event_format *VAR_8 = ((void*)0);
 struct format_field *VAR_9;
 char VAR_10[VAR_4];
 int VAR_11, VAR_12;
 FILE *VAR_13;

 FUNC_3(VAR_10, "%s.pl", VAR_7);
 VAR_13 = FUNC_1(VAR_10, "w");
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_5, "couldn't open %s\n", VAR_10);
  return -1;
 }

 FUNC_2(VAR_13, "# perf script event handlers, "
  "generated by perf script -g perl\n");

 FUNC_2(VAR_13, "# Licensed under the terms of the GNU GPL"
  " License version 2\n\n");

 FUNC_2(VAR_13, "# The common_* event handler fields are the most useful "
  "fields common to\n");

 FUNC_2(VAR_13, "# all events.  They don't necessarily correspond to "
  "the 'common_*' fields\n");

 FUNC_2(VAR_13, "# in the format files.  Those fields not available as "
  "handler params can\n");

 FUNC_2(VAR_13, "# be retrieved using Perl functions of the form "
  "common_*($context).\n");

 FUNC_2(VAR_13, "# See Context.pm for the list of available "
  "functions.\n\n");

 FUNC_2(VAR_13, "use lib \"$ENV{'PERF_EXEC_PATH'}/scripts/perl/"
  "Perf-Trace-Util/lib\";\n");

 FUNC_2(VAR_13, "use lib \"./Perf-Trace-Util/lib\";\n");
 FUNC_2(VAR_13, "use Perf::Trace::Core;\n");
 FUNC_2(VAR_13, "use Perf::Trace::Context;\n");
 FUNC_2(VAR_13, "use Perf::Trace::Util;\n\n");

 FUNC_2(VAR_13, "sub trace_begin\n{\n\t# optional\n}\n\n");
 FUNC_2(VAR_13, "sub trace_end\n{\n\t# optional\n}\n\n");

 while ((VAR_8 = FUNC_4(VAR_6, VAR_8))) {
  FUNC_2(VAR_13, "sub %s::%s\n{\n", VAR_8->system, VAR_8->name);
  FUNC_2(VAR_13, "\tmy (");

  FUNC_2(VAR_13, "$event_name, ");
  FUNC_2(VAR_13, "$context, ");
  FUNC_2(VAR_13, "$common_cpu, ");
  FUNC_2(VAR_13, "$common_secs, ");
  FUNC_2(VAR_13, "$common_nsecs,\n");
  FUNC_2(VAR_13, "\t    $common_pid, ");
  FUNC_2(VAR_13, "$common_comm,\n\t    ");

  VAR_11 = 0;
  VAR_12 = 0;

  for (VAR_9 = VAR_8->format.fields; VAR_9; VAR_9 = VAR_9->next) {
   if (VAR_11++)
    FUNC_2(VAR_13, ", ");
   if (++VAR_12 % 5 == 0)
    FUNC_2(VAR_13, "\n\t    ");

   FUNC_2(VAR_13, "$%s", VAR_9->name);
  }
  FUNC_2(VAR_13, ") = @_;\n\n");

  FUNC_2(VAR_13, "\tprint_header($event_name, $common_cpu, "
   "$common_secs, $common_nsecs,\n\t             "
   "$common_pid, $common_comm);\n\n");

  FUNC_2(VAR_13, "\tprintf(\"");

  VAR_11 = 0;
  VAR_12 = 0;

  for (VAR_9 = VAR_8->format.fields; VAR_9; VAR_9 = VAR_9->next) {
   if (VAR_11++)
    FUNC_2(VAR_13, ", ");
   if (VAR_12 && VAR_12 % 4 == 0) {
    FUNC_2(VAR_13, "\".\n\t       \"");
   }
   VAR_12++;

   FUNC_2(VAR_13, "%s=", VAR_9->name);
   if (VAR_9->flags & VAR_2 ||
       VAR_9->flags & VAR_0 ||
       VAR_9->flags & VAR_3)
    FUNC_2(VAR_13, "%%s");
   else if (VAR_9->flags & VAR_1)
    FUNC_2(VAR_13, "%%d");
   else
    FUNC_2(VAR_13, "%%u");
  }

  FUNC_2(VAR_13, "\\n\",\n\t       ");

  VAR_11 = 0;
  VAR_12 = 0;

  for (VAR_9 = VAR_8->format.fields; VAR_9; VAR_9 = VAR_9->next) {
   if (VAR_11++)
    FUNC_2(VAR_13, ", ");

   if (++VAR_12 % 5 == 0)
    FUNC_2(VAR_13, "\n\t       ");

   if (VAR_9->flags & VAR_0) {
    if ((VAR_12 - 1) % 5 != 0) {
     FUNC_2(VAR_13, "\n\t       ");
     VAR_12 = 4;
    }
    FUNC_2(VAR_13, "flag_str(\"");
    FUNC_2(VAR_13, "%s::%s\", ", VAR_8->system,
     VAR_8->name);
    FUNC_2(VAR_13, "\"%s\", $%s)", VAR_9->name,
     VAR_9->name);
   } else if (VAR_9->flags & VAR_3) {
    if ((VAR_12 - 1) % 5 != 0) {
     FUNC_2(VAR_13, "\n\t       ");
     VAR_12 = 4;
    }
    FUNC_2(VAR_13, "symbol_str(\"");
    FUNC_2(VAR_13, "%s::%s\", ", VAR_8->system,
     VAR_8->name);
    FUNC_2(VAR_13, "\"%s\", $%s)", VAR_9->name,
     VAR_9->name);
   } else
    FUNC_2(VAR_13, "$%s", VAR_9->name);
  }

  FUNC_2(VAR_13, ");\n");
  FUNC_2(VAR_13, "}\n\n");
 }

 FUNC_2(VAR_13, "sub trace_unhandled\n{\n\tmy ($event_name, $context, "
  "$common_cpu, $common_secs, $common_nsecs,\n\t    "
  "$common_pid, $common_comm) = @_;\n\n");

 FUNC_2(VAR_13, "\tprint_header($event_name, $common_cpu, "
  "$common_secs, $common_nsecs,\n\t             $common_pid, "
  "$common_comm);\n}\n\n");

 FUNC_2(VAR_13, "sub print_header\n{\n"
  "\tmy ($event_name, $cpu, $secs, $nsecs, $pid, $comm) = @_;\n\n"
  "\tprintf(\"%%-20s %%5u %%05u.%%09u %%8u %%-20s \",\n\t       "
  "$event_name, $cpu, $secs, $nsecs, $pid, $comm);\n}\n");

 FUNC_2(VAR_13,
  "\n# Packed byte string args of process_event():\n"
  "#\n"
  "# $event:\tunion perf_event\tutil/event.h\n"
  "# $attr:\tstruct perf_event_attr\tlinux/perf_event.h\n"
  "# $sample:\tstruct perf_sample\tutil/event.h\n"
  "# $raw_data:\tperf_sample->raw_data\tutil/event.h\n"
  "\n"
  "sub process_event\n"
  "{\n"
  "\tmy ($event, $attr, $sample, $raw_data) = @_;\n"
  "\n"
  "\tmy @event\t= unpack(\"LSS\", $event);\n"
  "\tmy @attr\t= unpack(\"LLQQQQQLLQQ\", $attr);\n"
  "\tmy @sample\t= unpack(\"QLLQQQQQLL\", $sample);\n"
  "\tmy @raw_data\t= unpack(\"C*\", $raw_data);\n"
  "\n"
  "\tuse Data::Dumper;\n"
  "\tprint Dumper \\@event, \\@attr, \\@sample, \\@raw_data;\n"
  "}\n");

 FUNC_0(VAR_13);

 FUNC_2(VAR_5, "generated Perl script: %s\n", VAR_10);

 return 0;
}
